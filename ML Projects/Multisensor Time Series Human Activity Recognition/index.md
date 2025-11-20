# Human Activity Recognition from Multisensor Time Series (AReM Dataset)

A complete machine learning pipeline for classifying human activities using multisensor time-series data. This project includes feature engineering, bootstrapping, binary logistic regression, L1-penalized models, and multiclass classification across seven activity categories.

---

## Overview
This project builds an end-to-end system for human activity recognition (HAR) using the AReM dataset from UCI. Each instance contains six time-series signals of 480 samples each, recorded from a wireless sensor network.

Key components:
- Time-series feature extraction
- Bootstrapped confidence intervals
- Binary classification (bending vs. non-bending)
- L1-penalized logistic regression
- Multiclass classification (7 activities)
- Stratified cross-validation and model evaluation

---

## Dataset
Source: AReM (Activity Recognition system based on Multisensor data fusion)

Each activity instance includes:
- 6 time series
- 480 samples per series
- 88 instances total
- 7 activity classes
- Train/test split following dataset guidelines

---

## Feature Engineering
Extracted time-domain features for each of the six sensor time series:

- Minimum
- Maximum
- Mean
- Median
- Standard deviation
- First quartile (Q1)
- Third quartile (Q3)

This results in 42 features per instance.

### Bootstrapping
- Estimated standard deviation of each feature
- Constructed 90% bootstrapped confidence intervals using 1,000 bootstrap samples
- Used variability and separability to choose the strongest features

### Selected Top Features
Based on exploratory analysis:
- min
- mean
- max

---

## Binary Classification: Bending vs. Non-Bending

### Exploratory Analysis
Scatter plots of selected features (from time series 1, 2, and 6) reveal strong separability between bending and non-bending activities.

### Time-Series Segmentation
To increase temporal granularity:
- Split each time series into l ∈ {1, 2, …, 20} equal segments
- Recomputed features for each segment
- Feature dimensionality scales with l while number of instances remains constant

### Logistic Regression with p-Value Feature Selection
For each segmentation level l:
1. Fit logistic regression
2. Compute p-values
3. Remove insignificant features
4. Refit reduced model
5. Evaluate using 5-fold stratified cross-validation

Correct CV method:
Feature selection is performed inside each fold, not before cross-validation.

### Findings
- Best performance around l ≈ 4–6
- ROC curves show strong separability
- Some near-linear separability causes potential parameter instability

---

## L1-Penalized Logistic Regression (LASSO)

### What Was Tuned
- Segmentation count l
- Penalty weight (λ or inverse C)

### Results
- More stable than p-value pruning
- Automatic feature selection via regularization
- Cleaner and more interpretable models
- Slightly higher accuracy for the binary task

Best model: L1-penalized logistic regression.

---

## Multiclass Classification (7 Activities)

### L1-Penalized Multinomial Logistic Regression
- Strongest multiclass performance
- High accuracy for motion-heavy classes (walking, cycling)
- Expected confusion among postural activities (sitting vs. standing)

### Naïve Bayes
- Gaussian NB performed reasonably well
- Multinomial NB underperformed (features are continuous)

Best multiclass model: L1-penalized multinomial logistic regression.

---

## Results Summary

| Task | Best Model | Reason |
|------|------------|---------|
| Bending vs. Non-Bending | L1 Logistic Regression | Stable, sparse, high AUC |
| Multiclass (7 activities) | L1 Multinomial Logistic Regression | Best accuracy and consistency |
| Baseline | Gaussian NB | Fast and reasonable |

---

## Key Insights
- Simple statistical features capture meaningful activity patterns
- Segmenting time series improves representation and accuracy
- Regularization provides robustness and interpretability
- Class imbalance (bending) requires stratified CV and model tuning

---

## Future Improvements
Potential extensions include:
- LSTM or 1D-CNN sequence models
- Frequency-domain features (FFT peaks, spectral entropy)
- SMOTE or focal loss for class imbalance
- Hyperparameter tuning with Optuna
- Transformer-based architectures for time-series data
  
---

## Author
Karishma Rohatgi  
BS/MS Biomedical Engineering & Data Analytics  
University of Southern California
