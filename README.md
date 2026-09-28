# Operating System Lab

This repository contains the programs and practical work completed as part of the **Operating System Laboratory**.

The lab work is organized **day-wise and assignment-wise** for easy navigation and reference.

## Repository Structure

```text
OS-Lab/
│
├── Day-01/
├── Day-02/
├── Day-03/
├── Day-04/
├── Day-05/
├── Day-06/
├── Day-07/
├── Day-08/
├── Day-09/
├── Day-10/
├── Day-11/
└── README.md
```

Each day's folder contains the programs, input files, and a `README.md` describing the corresponding lab activities.

## Topics Covered

* Linux Command Line and File Management
* Shell Scripting
* Process Creation and Management
* Inter-Process Communication (IPC)
* CPU Scheduling Algorithms
* Multithreading
* Synchronization
* Other Operating Systems concepts and practical implementations

## CPU Scheduling Algorithms

The repository includes implementations of commonly used CPU scheduling algorithms such as:

* First Come First Serve (FCFS)
* Shortest Job First (SJF)
* Shortest Remaining Time First (SRTF)
* Highest Response Ratio Next (HRRN)
* Round Robin (RR)

## Programming Languages & Tools

* **C**
* **Bash / Shell Scripting**
* **GCC**
* **Linux / Unix Command Line**
* **POSIX Threads (pthreads)**

## How to Compile and Run C Programs

Navigate to the required day folder and compile the program using GCC:

```bash
gcc D11_A01.c -o D11_A01 -pthread
```

Run the executable:

```bash
./D11_A01
```

For programs that do not use pthreads:

```bash
gcc D07_A01.c -o D07_A01
./D07_A01
```

## Input Files

Some programs use external input files such as:

```text
process_data.txt
process_properties.txt
```

These files are kept in the respective day folder when required by the program.

Example `process_data.txt`:

```text
1 0 5
2 1 3
3 2 8
4 3 6
```

## Purpose

The purpose of this repository is to maintain a structured record of OS laboratory work, including source code, input files, and practical implementations of important Operating Systems concepts.

---

**Operating Systems Laboratory | B.Tech**
