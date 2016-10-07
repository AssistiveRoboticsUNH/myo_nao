//#include "../include/NaoExercise.h"
#include "../include/NaoExercise3S.h"
#include <unistd.h>

int main(int argc, char** argv) {
    ros::init(argc, argv, "myo_converter");

    NaoExercise3S nao_exercise;
    ros::spin();

    return 0;
}

