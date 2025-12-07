Infoblox Online Assessment & Interview Review

This folder contains my complete review and reconstructed solutions for the coding challenges and technical interview questions I received during the Infoblox interview process.

Interview Date: December 3rd, 2025
Interview Location: Online (remote)
Interview Format: Multi-round interview with engineers and senior staff members at Infoblox
This content focuses on Round 2, but includes references to Round 1 and Round 3 for full context.

------------------------------------------------------------
Overview of Interview Rounds
------------------------------------------------------------

Round 1 — Director of Engineering (Shadid Chowdhury)
- Behavioral questions about teamwork, conflict handling, and API design decisions.
- Coding Question: API rate-limiting problem
  Goal: Detect whether a user has made more than 100 API requests within 1 minute using customerID + customerIP as unique identity.
  My original solution contained major structural issues (no sliding window, incorrect timestamp tracking).
  This folder includes a corrected professional solution and analysis.

Round 2 — Senior Engineering Manager (Mehdi Zeinali)
- Behavioral section about conflict resolution, memorable projects, and collaboration.
- Coding Question: Extended FizzBuzz
  Divisible by:
    2 → fizz
    3 → buzz
    5 → fuzz
    7 → bizz
  My code had multiple syntax errors; the interviewer helped correct them live.
  This folder includes a rewritten correct C++ version and explanation.

Round 3 — Senior Staff Data Engineer (Udara Perera)
- Behavioral questions: interest areas, long-term motivation, memorable challenges.
- Coding Question: Print a Binary Search Tree in vertical order (column-by-column printing).
  My original attempt had structural issues: wrong recursion, incorrect map usage, missing base cases.
  This folder contains a correct DFS/BFS solution and detailed notes.

------------------------------------------------------------
What This Folder Contains
------------------------------------------------------------

This Infoblox folder is organized into problem-specific subfolders:

1. API Rate Limiting (Round 1 Coding)
   - explanation.md
   - solution.cpp
   - notes.md

2. Extended FizzBuzz (Round 2 Coding)
   - explanation.md
   - solution.cpp
   - notes.md

3. BST Vertical Order Printing (Round 3 Coding)
   - explanation.md
   - solution.cpp
   - notes.md

Each folder contains:
- Reconstructed problem statement
- Clean and corrected solution
- Complexity analysis
- My original thought process
- Mistakes made during the interview
- How to improve next time

------------------------------------------------------------
Purpose of This Review
------------------------------------------------------------

The intention of this documentation is to:
- Accurately capture what occurred during my Infoblox interview
- Rebuild the solutions using proper engineering practices
- Identify gaps in knowledge revealed during the actual interview
- Strengthen my data structure, algorithm, and system design fundamentals
- Prepare for future interviews by reflecting on mistakes and improving reasoning speed under pressure

This folder serves as a long-term technical record of my Infoblox interview experience in December 2025.
