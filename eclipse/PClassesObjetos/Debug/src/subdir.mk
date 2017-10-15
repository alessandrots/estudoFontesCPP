################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/PClassesObjetos.cpp \
../src/Person.cpp \
../src/Resource.cpp \
../src/Tweeter.cpp \
../src/Utility.cpp 

OBJS += \
./src/PClassesObjetos.o \
./src/Person.o \
./src/Resource.o \
./src/Tweeter.o \
./src/Utility.o 

CPP_DEPS += \
./src/PClassesObjetos.d \
./src/Person.d \
./src/Resource.d \
./src/Tweeter.d \
./src/Utility.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -std=c++0x -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


