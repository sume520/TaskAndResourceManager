//
// Created by sume5 on 2019/4/20.
//

#ifndef TASKANDRESOURCEMANAGER_RCB_H
#define TASKANDRESOURCEMANAGER_RCB_H

#define allocated 0     //已分配
#define free 1          //空闲

struct R1 {
    int rid;
    int Status;
};

#define R2_Max_Count 2
struct R2 {
    int rid;
    int Status = R2_Max_Count;
};

#define R3_Max_Count 3
struct R3 {
    int rid;
    int Status = R3_Max_Count;
};

#define R4_Max_Count 4
struct R4 {
    int rid;
    int Status = R4_Max_Count;
};

#endif //TASKANDRESOURCEMANAGER_RCB_H
