# krohatgi-2025.github.io

Hey all! My name is **Karishma Rohatgi**, and I am an aspiring data analyst/engineer with an AI/ML focus.  
This portfolio showcases a selection of engineering, analytics, and machine learning projects I’ve completed throughout my academic and early professional career.

Below is a quick overview of the major projects featured on this site.

---
## [GlucoPress — Non-Invasive Blood Glucose Monitoring Device](./GlucoPress/)

**GlucoPress** is a custom-built biomedical device that estimates blood glucose levels using **photoplethysmography (PPG)** instead of finger-stick measurements.  
My team and I designed and built the full system end-to-end, including:

- A multi-LED optical sensor (red, IR, green)  
- Photodiode receiver + analog front-end amplification  
- Filtering and pulse-shape extraction  
- Feature engineering from PPG waveforms  
- Machine learning regression models for glucose estimation (Random Forest, XGBoost)

The device explores whether optical changes in blood pulse signals can correlate with glucose trends.  

**Demo video:** https://www.youtube.com/watch?v=ZFbn7bhbfZE

 **Project folder:** [GlucoPress/](./GlucoPress/)

---
## [APS Failure Prediction (Tree-Based ML Models)](./ML%20Projects/APS%20Failure%20Data%20Project/)

This project uses a large, highly imbalanced industrial dataset from Scania Trucks to predict rare **APS (Air Pressure System) failures**.  
The work includes:

- Cleaning and imputing 170 real-valued sensor features  
- Coefficient of Variation and correlation analysis  
- Random Forest (baseline + class-weighted)  
- XGBoost with L1 regularization  
- SMOTE-based oversampling  
- ROC, AUC, and recall-based evaluation  

This project demonstrates advanced tabular modeling and handling of real-world data imbalance.

**Project folder:** [APS Failure Data Project](./ML%20Projects/APS%20Failure%20Data%20Project/)

---
## [Vertebral Column Classification (Multiclass ML)](./ML%20Projects/Vertebral%20Health%20Classification%20Using%20Machine%20Learning/)

Using curated biomechanical measurements from the vertebral column, this project builds multiclass classifiers to distinguish:

- Herniated disc  
- Spondylolisthesis  
- Normal spine

Methods include:
- Logistic Regression  
- SVM  
- Random Forest  
- Detailed metrics: confusion matrices, precision/recall, ROC curves  

This project highlights my ability to build interpretable medical-data classification models.

**Project folder:** [Vertebral Health Classification](./ML%20Projects/Vertebral%20Health%20Classification%20Using%20Machine%20Learning/)


---
## [Multisensor Human Activity Recognition](./ML%20Projects/Multisensor%20Time%20Series%20Human%20Activity%20Recognition/)

This project uses **wearable sensor data** (accelerometer, gyroscope, and orientation signals) to classify human activities such as:

- Walking  
- Standing  
- Cycling  
- Sitting  
- Lying  
- Bending  

The pipeline includes:
- Sliding window segmentation  
- Statistical feature extraction (mean, variance, energy)  
- Logistic Regression, Random Forest, XGBoost models  
- Confusion matrix + ROC/AUC micro/macro evaluation  

This project demonstrates full-stack ML from preprocessing to evaluation on temporal data.

**Project folder:**  
[Multisensor Time Series Human Activity Recognition](./ML%20Projects/Multisensor%20Time%20Series%20Human%20Activity%20Recognition/)

---
## Engineering the Gut–Brain Connection — Research Report
*Organ-on-a-Chip Modeling of the Gut–Brain Axis*

This report explores how engineering and microfluidic technologies can model the Gut–Brain Axis (GBA) more accurately than traditional animal studies or human clinical trials. It introduces Organ-on-a-Chip (OoC) systems, explains the physics behind microfluidic signaling, and analyzes next-generation multi-organ platforms (such as MINERVA) that replicate gut–brain interactions in vitro. The report also discusses applications in neurodegenerative disease research, personalized medicine, ethical advantages, and future AI-enabled chip monitoring.

**Key Highlights:**
- Overview of gut physiology, ENS, vagus nerve, and bidirectional signaling  
- Limitations of animal models & human clinical trials  
- OoC architecture, microfluidic flow, shear stress, and concentration gradients  
- Multi-organ GBA chips + Alzheimer’s drug transport case study  
- Personalized medicine (microbiome-specific drug responses)  
- Ethical benefits: reduced animal testing and lower trial burden  
- Future direction: AI-driven analysis of multi-organ chips  

**Full Report:** [Engineering the Gut-Brain Connection](./Reports/Engineering%20the%20Gut-Brain%20Connection%20Report/)

--- 

## GlucoPress — Senior Design Engineering Report
*Non-Invasive Glucose Monitoring Device (PPG + ML + Arduino)*

This engineering report documents the full development of **GlucoPress**, a non-invasive glucose monitoring device built using photoplethysmography (PPG), machine-learning glucose estimation, and an LED-based alert interface. It includes problem framing, system design, CAD hardware, signal processing, ML model development, verification results, and adherence to engineering standards.

**Key Highlights:**
- Device overview, market need, and stakeholder analysis  
- PPG-based vital sign extraction (HR, SpO₂) with signal preprocessing  
- ML regression pipeline for glucose prediction (R² ≈ 0.86)  
- LED alert system for hypo-/euglycemia/hyperglycemia  
- Arduino hardware integration & full wiring diagrams  
- CAD housing design, materials, and portability considerations  
- Safety, regulatory strategy (FDA 510(k)), ISO 13485 alignment  
- Verification testing + lessons learned  

**Full Report:** [GlucoPress Final Report](./Reports/GlucoPress%20Final%20Report/)


## Contact
Please reach out if you have questions or would like to collaborate!

**Email:** krohatgi974@gmail.com  
**Phone:** +1 (617) 922-9255

Thanks for visiting my portfolio — I hope you enjoy exploring my work!
