################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/c++\ method.cpp 

CPP_DEPS += \
./src/c++\ method.d 

OBJS += \
./src/c++\ method.o 


# Each subdirectory must supply rules for building sources it contributes
src/c++\ method.o: ../src/c++\ method.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/c++ method.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/c++\ method.d ./src/c++\ method.o

.PHONY: clean-src

