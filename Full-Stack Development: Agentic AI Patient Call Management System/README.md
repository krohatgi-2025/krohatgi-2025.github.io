# Full-Stack Patient Call Management Tool (Agentic AI Backend, React + Vite Frontend)

**PCM Tool** is a full-stack, AI-driven automation tool that removes the manual burden of calling skilled nursing facilities (SNFs) during patient transfers.  
It was developed for a healthcare-focused AI solutions company I am working with, which builds agentic AI systems to streamline operational workflows for clients.

Hospitals and clinics typically spend hours calling multiple facilities to notify them of incoming patients — this project automates that entire workflow.

---
## Repository 

**GitHub Repository**  
Patient-Call-Management (PCM Tool):  
https://github.com/krohatgi-2025/Patient_Call_Management

---
## Demonstration Video 

[![Video Demo](https://img.youtube.com/vi/-apbaY2vmEs/0.jpg)](https://youtu.be/-apbaY2vmEs)

---

## Overview

This system integrates:

- **Lovable (React + Vite)** → Front-end UI + Google Sheets syncing  
- **Vogent Agentic AI** → Backend autonomous calling system  
- **Google Sheets API** → Real-time patient and facility data  
- **Custom API Routes** → Dial initiation + call-status polling  

With one click, the platform reads a clinic’s Google Sheet, triggers autonomous calls to each nursing home using agentic AI, and displays call statuses in the dashboard.

---

## What “Agentic AI” Means Here

The backend uses **Vogent’s agentic AI**, capable of taking actions (phone calls), interpreting outcomes, and returning structured results.  
This replaces the need for a human caller entirely.

---

## Architecture

```txt
┌──────────────────┐      ┌──────────────────────────┐      ┌────────────────────────┐      ┌───────────────────────────┐
│  Google Sheets   │ ───▶ │  Lovable Front-End (UI)  │ ───▶ │     API Routes         │ ───▶ │   Vogent Agentic AI Caller │
└──────────────────┘      └──────────────────────────┘      └────────────────────────┘      └───────────────────────────┘
         ▲                                                                                                      │
         └───────────────────────────────  Status / Logs / Call Outcomes  ◀──────────────────────────────────────┘
