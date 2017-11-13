/*
 * Car.h
 *
 *  Created on: 11 de nov de 2017
 *      Author: alessandrots
 */

#ifndef INTERFACES_CAR_H_
#define INTERFACES_CAR_H_

struct Car {
private:
	/*
	float fuel{ 0 };
	float speed{ 0 };
	int passengers{ 0 };
	int arr[5] = { 1,2,3 };
	char *p{};
	*/
	float fuel;
	float speed;
	int passengers;
	static int totalCount;
	//int arr[5] = { 1,2,3 };
	//char *p{};
public:
	Car();
	Car(float amount);
	Car(float amount, int pass);
	void FillFuel(float amount);
	void Accelerate();
	void Brake();
	void AddPassengers(int count);
	void Dashboard();
	~Car();
};



#endif /* INTERFACES_CAR_H_ */
