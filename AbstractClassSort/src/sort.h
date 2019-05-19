//
// Created by pda on 22.03.19.
//

#ifndef ABSTRACTCLASSSORT_SORT_H
#define ABSTRACTCLASSSORT_SORT_H


class Sort {

protected:

public:

    virtual void sorting(int *, unsigned int) = 0;

};

class ShellSort : public Sort {
public:
    void sorting(int *, unsigned int) override;

};

class Double_track_inserts : public Sort {
public:
    void sorting(int *, unsigned int) override;
};

void print(int *arr, unsigned size);

#endif //ABSTRACTCLASSSORT_SORT_H
