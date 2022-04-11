//pagetable.c will manage the page table for the process. 

struct PageTableEntry {
    int validBit;
    int frameNum;
    int lastReferenced;
};