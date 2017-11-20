################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../interfaces/Account.cpp \
../interfaces/Checking.cpp \
../interfaces/Savings.cpp \
../interfaces/Transaction.cpp 

OBJS += \
./interfaces/Account.o \
./interfaces/Checking.o \
./interfaces/Savings.o \
./interfaces/Transaction.o 

CPP_DEPS += \
./interfaces/Account.d \
./interfaces/Checking.d \
./interfaces/Savings.d \
./interfaces/Transaction.d 


# Each subdirectory must supply rules for building sources it contributes
interfaces/%.o: ../interfaces/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++1y -O0 -g3 -Wall -c -fmessage-length=0 -Wno-attributes -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


