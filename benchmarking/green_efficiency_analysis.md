Measurement Methodology:

Measuring execution time for a deterministic computation 3 times.
Comparing execution time between two predefined implementations which included native algorithm and single pass algorithm.
And executing a multi phase program and measuring execution time for each phase.
 
Observed Performance Differences:

Baseline for execution time was measured as below. This was done 3 times.

Iterations: 100000000
Execution time: 0.225871 seconds
Iterations: 100000000
Execution time: 0.244889 seconds
Iterations: 100000000
Execution time: 0.226119 seconds

When comparing implementation, although native algorithm executed a much higher result, the average naive algorithm time was 1.657522 slower than average single-pass algorithm time.

And lastly, the below times were recorded when measuring different phases of the last program.

TOTAL seconds: 0.000751
BUILD DATA seconds: 0.000296
PROCESS seconds: 0.000307
REDUCE seconds: 0.000142

Relation Between Runtime and Energy Consumption:

The relation between runtime and energy consumption could be described as parallel to each other. The longer a program runs the more energy it consumes.

Limitations of the Experiment:

Limitation of this experience included running programs on the same device and operating systems.

Practical Engineering Takeaway:

A takeaway from this experiment is that native algorithms are slower, however produce a higher result. 
