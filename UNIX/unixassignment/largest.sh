awk 'BEGIN{largest=0}
    {
    

    if(NF > largest){
        largest=NF
        record=NR
    }

    } END {
        print largest 
        print record
    }' marks.pu