################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/c++\ calculator.cpp 

CPP_DEPS += \
./src/c++\ calculator.d 

OBJS += \
./src/c++\ calculator.o 


# Each subdirectory must supply rules for building sources it contributes
src/c++\ calculator.o: ../src/c++\ calculator.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/c++ calculator.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/c++\ calculator.d ./src/c++\ calculator.o

.PHONY: clean-src

