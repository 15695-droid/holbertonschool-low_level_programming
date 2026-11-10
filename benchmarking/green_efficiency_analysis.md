Measurement Methodology:

Measuring execution time for a deterministic computation 3 times.
Comparing execution time between two predefined implementations which included naive algorithm and single pass algorithm.
And executing a multi phase program and measuring execution time for each phase.
 
Observed Performance Differences:

Baseline for execution time was measured as below. This was done 3 times.

Iterations: 100000000
Execution time: 0.225871 seconds
Iterations: 100000000
Execution time: 0.244889 seconds
Iterations: 100000000
Execution time: 0.226119 seconds

To compare different algorithms I ran a naive algorithm and a single pass algorithm to compare their speed. Since naive algorithms use loops within loops it repeats a lot of work therefore higher in its result and speed. Whereas a single pass algorithm goes through the data only once.

Naive algorithm result: 625025000
Naive algorithm time: 2.748924 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000106 seconds

Naive algorithm result: 625025000
Naive algorithm time: 2.739189 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000106 seconds

Naive algorithm result: 625025000
Naive algorithm time: 2.763453 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000116 seconds

average Naive algorithm time: 2.750522
average Single-pass algorithm time: 1.00093

When comparing implementation, the average naive algorithm time was 2.750413 seconds slower than average single-pass algorithm time.

And lastly, the below times were recorded when measuring different phases of the last program.

TOTAL seconds: 0.000751
BUILD DATA seconds: 0.000296
PROCESS seconds: 0.000307
REDUCE seconds: 0.000142

Relation Between Runtime and Energy Consumption:

Although energy consumption was not measured in this experiment, one can still say that energy consumption is roughly proportional to runtime, since energy equals power multiplied by time. However power draw can also vary with CPU load and frequency. 

Limitations of the Experiment:

All the tests ran on one device and one operating system, so the results might be different on other systems and devices. The sample size was also only 3, and a small sample size might not help when measuring exact results. Programs running in the background could also affect results. 

Practical Engineering Takeaway:

Choosing an algorithm can be important in terms of speed. The single pass algorithm was much faster than the naive algorithm. Timing phases of a program can also help to see which parts to improve. Since a longer runtime would likely mean more energy consumption, minding these things could potentially help to save energy.
