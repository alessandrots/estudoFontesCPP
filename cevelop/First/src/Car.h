/*
 * Car.h
 *
 *  Created on: 4 de nov de 2017
 *      Author: alessandrots
 */

#ifndef CAR_H_
#define CAR_H_

class Car {

private:
        float fuel{ 0 };
        float speed{ 0 };
        int passengers{ 0 };
        int arr[5] = { 1,2,3 };
        char *p{};
        static int totalCount;
public:
        Car();
        Car(float amount);
        void FillFuel(float amount);
        void Accelerate();
        void Brake();
        void AddPassengers(int count);
        void Dashboard()const;
        void ShowCount();
        virtual ~Car();
};

#endif /* CAR_H_ */
