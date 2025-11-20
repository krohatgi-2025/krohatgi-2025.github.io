# APS Failure Prediction Using Tree-Based Machine Learning

This project builds predictive models to detect rare APS (Air Pressure System) failures in Scania trucks using high-dimensional sensor data. The dataset contains 170 numeric features, extensive missing values, and heavy class imbalance, making it a realistic industrial classification problem.

The notebook implements a full end-to-end machine learning workflow: data cleaning, feature exploration, baseline modeling, imbalance handling, advanced modeling, and final comparison of results.

---

## Project Objectives
- Preprocess and clean a large dataset with widespread missing values  
- Explore feature variability and correlations  
- Train baseline Random Forest and advanced XGBoost models  
- Address severe class imbalance through class weighting and SMOTE  
- Evaluate models using metrics appropriate for rare-event classification (ROC, AUC, recall)

---

## Files in This Repository
- **APS_Failure_Project.ipynb** — Complete notebook with all preprocessing steps, modeling, and evaluations  
- **data/** — Optional folder for raw training and test CSV files  
- **results/** — Folder for saved plots (ROC curves, confusion matrices)  
- **README.md** — Project summary and documentation  

---

## Methods

### Data Preparation
- Imputed missing values (median or iterative imputation)
- Computed coefficient of variation (CV) for feature variability
- Generated a correlation matrix to examine redundancy
- Created scatter and box plots for high-variance features

### Class Imbalance Handling
- The dataset is heavily skewed (~1,000 positive vs 59,000 negative cases)
- Used class weighting (`class_weight='balanced'`) in Random Forest
- Applied SMOTE oversampling within cross-validation folds to avoid data leakage

### Models Implemented
- Random Forest (unbalanced)
- Balanced Random Forest (class-weighted)
- XGBoost with L1 regularization
- SMOTE + XGBoost pipeline
- All models evaluated with ROC curves, AUC scores, confusion matrices, and recall

---

## Results Summary
(Replace with actual values after running the notebook.)

| Model              | Test AUC | Recall (Positive) | Notes                                     |
|--------------------|----------|--------------------|-------------------------------------------|
| Random Forest      |          |                    | Baseline model, low minority recall       |
| Balanced RF        |          | ↑                  | Improved detection of positive failures   |
| XGBoost            |          |                    | Strong overall classifier                 |
| SMOTE + XGBoost    |          | ↑↑                 | Best minority recall when tuned properly  |

Main takeaway: imbalance handling significantly improves failure detection performance.

---

## Key Insights
- Missing values must be carefully imputed due to high frequency  
- Class imbalance heavily affects baseline models  
- XGBoost performs strongly on high-dimensional sensor data  
- SMOTE improves minority recall when used correctly inside CV  
- ROC-AUC is more reliable than accuracy for this dataset  

---

## Future Work
- Test ADASYN or SMOTE-Tomek  
- Compare with LightGBM or CatBoost  
- Explore dimensionality reduction (PCA, UMAP)  
- Deploy a real-time inference script for APS monitoring  

---

## Author
**Karishma Rohatgi**  
M.S. Biomedical Data Analytics — University of Southern California  
