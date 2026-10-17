# OSSP Lab Exam — Set 4

This folder contains the two Set 4 programs.

## 1. Round Robin CPU Scheduling (`rr.c`)

A C program that demonstrates Round Robin scheduling for processes that all arrive at time 0. It displays completion time (CT), turnaround time (TAT), waiting time (WT), and their averages.

Compile and run in Ubuntu/WSL:

```bash
gcc rr.c -o rr
./rr
```

Example input: 3 processes with burst times `5`, `4`, `2` and time quantum `2`.

## 2. Running Processes (`q2.sh`)

A Bash script that uses `ps` and `top` to show process and system activity.

Run in Ubuntu/WSL:

```bash
chmod +x q2.sh
./q2.sh
```

## Execution screenshots

Add your own terminal screenshots to this folder after running each program successfully. Suggested names: `rr-output.png` and `q2-output.png`.
