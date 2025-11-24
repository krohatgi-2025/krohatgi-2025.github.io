# Care Transfer Nexus

**Care Transfer Nexus** is a full-stack, AI-driven automation tool that removes the manual burden of calling skilled nursing facilities (SNFs) during patient transfers.  
Hospitals and clinics typically spend hours calling multiple facilities to notify them of incoming patients — this project automates that entire workflow.

---

## 🌐 Overview

This system integrates:

- **Lovable (React + Vite)** → Front-end UI and Google Sheets syncing  
- **Vogent Agentic AI** → Backend autonomous calling system  
- **Google Sheets API** → Real-time patient and facility data  
- **Custom API Routes** → Dial initiation + call-status polling  

With one click, the platform reads a clinic’s Google Sheet, triggers autonomous calls to each nursing home using agentic AI, and displays call statuses in the dashboard.

---

## 🧠 What “Agentic AI” Means Here

The backend uses **Vogent’s agentic AI**, which behaves like an autonomous agent capable of taking actions (phone calls), interpreting call outcomes, and updating statuses.  
This replaces the need for a human caller entirely.

---

## 🏗️ Architecture

```txt
┌──────────────────┐      ┌──────────────────────────┐      ┌────────────────────────┐      ┌───────────────────────────┐
│  Google Sheets   │ ───▶ │  Lovable Front-End (UI)  │ ───▶ │     API Routes         │ ───▶ │   Vogent Agentic AI Caller │
└──────────────────┘      └──────────────────────────┘      └────────────────────────┘      └───────────────────────────┘
         ▲                                                                                                      │
         └───────────────────────────────  Status / Logs / Call Outcomes  ◀──────────────────────────────────────┘

