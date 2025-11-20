# GlucoPress: Non-Invasive Blood Glucose Monitoring Using PPG Signals

GlucoPress is a custom-built, proof-of-concept biomedical device designed to estimate blood glucose levels **non-invasively** using **photoplethysmography (PPG)** signals.  
This project integrates hardware design, signal acquisition, analog filtering, digital processing, and machine learning into a single end-to-end system.

▶️ **Demo Video:** https://www.youtube.com/watch?v=ZFbn7bhbfZE

This project was completed as part of a biomedical engineering capstone and demonstrates the feasibility of leveraging optical sensors and ML models to approximate glucose concentration without finger-prick measurements.

---

## Overview

Traditional glucose monitoring requires invasive finger-stick measurements or expensive continuous glucose monitors (CGMs). GlucoPress aims to explore an alternative approach using **light-based sensing (PPG)**.

The device uses:
- **LED emitters** at multiple wavelengths  
- **A photodiode receiver**  
- **Analog signal conditioning circuitry**  
- **Digital signal processing (DSP)**  
- **Machine learning models** trained on extracted PPG features  

The system measures how light is absorbed and reflected by tissue, correlating changes in the PPG waveform with glucose levels.

---

## Hardware Architecture

The device includes a full optical sensing and analog front-end system:

### **Optical Components**
- Multiple LEDs (typically red, IR, green)
- Photodiode sensor for reflected light
- Finger clip housing for stable placement

### **Analog Front-End**
- Transimpedance amplifier (TIA)
- Band-pass filtering to isolate cardiac-related frequencies
- Gain stages to stabilize signal amplitude
- Noise removal via analog and digital filtering

### **Microcontroller / Acquisition**
- Arduino / custom board for signal sampling
- Sampling rate selected to preserve pulse morphology
- Serial output for data streaming into ML pipeline

### **Mechanical Design**
- 3D-printed finger probe enclosure
- Light-isolated channel for noise reduction

---

## Signal Processing Pipeline

After raw PPG capture, the following processing is performed:

1. **Noise Reduction**
   - Low-pass / band-pass filtering  
   - Motion artifact suppression

2. **Segmentation**
   - Extraction of clean cardiac cycles  
   - Peak and valley detection  

3. **Feature Engineering**
   - Time-domain features (rise time, fall time, amplitude ratios)  
   - Frequency-domain features (FFT, spectral energy)  
   - Morphological features (dicrotic notch depth, pulse width)  

4. **Normalization & Scaling**

The final feature set forms the input to machine learning models.

---

## Machine Learning Prediction

Using extracted PPG features, multiple regression models were tested to predict glucose concentration:

- Linear Regression  
- Random Forest Regression  
- XGBoost Regression  

Models were evaluated on:
- Mean Absolute Error (MAE)  
- R² Score  
- Stability across sensor sessions  

The goal is not to replace clinical tools but to explore feasibility and device prototyping.

---

## Results

- The device successfully captured clean PPG waveforms.  
- Extracted features were predictive of glucose-level trends.  
- Ensemble models (Random Forest, XGBoost) outperformed linear methods.  
- Demonstrated potential for future real-time, non-invasive glucose monitoring.

Performance is limited by:
- Sample size  
- Sensor quality  
- Variability in tissue optical properties  

Future work will involve calibration datasets, larger subject groups, and improved optical isolation.

---

## Demo

A full demonstration of the device, its operation, and signal processing pipeline can be viewed here:

**https://www.youtube.com/watch?v=ZFbn7bhbfZE**

---

## Future Improvements

- Add multi-wavelength LED optimization  
- Implement real-time processing on a microcontroller  
- Collect larger datasets across multiple subjects  
- Improve mechanical housing for consistency  
- Explore deep learning approaches for waveform interpretation  

---

## Author

**Karishma Rohatgi**  
Biomedical Engineering + Data Analytics  
University of Southern California  

**Partners** 
Danh (Boon) Le 
Mya Cohen 
