skeleton
==========

Skeleton code to analyze new cfA ntuples. 

#### Running the code
Issue the following commands:

    git clone git@github.com:manuelfs/skeleton
    cd skeleton
    ./compile.sh
    ./scripts/analyze_tree.exe -f example_cfa_file.root 

The compile step creates the files `inc/cfa.hpp` and `src/cfa.cpp` with a wrapper class based on 
`example_cfa_file.root`. If the structure of the cfA ntuple changes, just copy an example
file onto `example_cfa_file.root` (1 event is enough), and compile again.

The executable `./scripts/analyze_tree.exe` takes as input the name of a cfA ntuple or a folder
containing cfA ntuples. In the latter case, all the ntuples in the folder are chained together.

#### Modifying the code
The analysis code should be included in the `void event_handler::analyze()` function of
`src/event_handler.cpp`. All the branches of the cfA ntuples are directly accessible from
there.