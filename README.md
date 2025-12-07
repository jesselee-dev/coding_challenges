# Coding Challenges & Online Assessments

This repository contains two major parts:

1. Online Assessments (OA) from real companies
2. Small coding challenges / experimental snippets

It is designed to be clean, structured, and easy to maintain as a long-term learning and interview-preparation archive.

------------------------------------------------------------
Repository Structure
------------------------------------------------------------
coding_challenges/
│
├── oa/                    ← Company online assessments
│   ├── infoblox/
│   ├── cadmakers/
│   ├── cisco/
│   ├── splunk/
│   └── ...
│
├── challenges/            ← Small tests, experiments, utilities
│   ├── fibonacci.js
│   └── ...
│
└── templates/             ← Reusable templates
    ├── cpp-template.cpp
    └── notes-template.md

------------------------------------------------------------
OA — Online Assessments
------------------------------------------------------------
Each company has its own folder.
Each OA attempt includes:

- Problem statement / screenshot
- Explanation
- Code solution
- Notes & reflections
- Complexity analysis

Example:
oa/
└── infoblox/
    └── 2025-12/
        ├── problem.png
        ├── solution.cpp
        ├── explanation.md
        └── notes.md

------------------------------------------------------------
Coding Challenges
------------------------------------------------------------
The challenges/ folder contains:

- Mini practice problems
- Algorithm experiments
- Language feature tests
- Any code not tied to a specific OA

------------------------------------------------------------
Templates
------------------------------------------------------------
templates/ folder provides reusable scaffolding:

cpp-template.cpp:
- Standard includes
- Fast I/O setup
- Basic class structure
- Common utilities

notes-template.md:
- Problem summary
- Approach
- Complexity
- Edge cases
- Reflection

------------------------------------------------------------
Adding a New OA
------------------------------------------------------------
1. Create a folder:
   oa/<company>/<year-month>/

2. Add:
   - problem.png
   - solution.cpp
   - explanation.md
   - notes.md (from template)

3. Commit with a message such as:
   Add Infoblox OA 2025-12: complete solution & notes

------------------------------------------------------------
Purpose of This Repository
------------------------------------------------------------
- Track real-world OA problems
- Build a long-term coding portfolio
- Improve problem-solving skills
- Prepare for software engineering interviews
