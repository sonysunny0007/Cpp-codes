################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/c++\ oops.cpp 

CPP_DEPS += \
./src/c++\ oops.d 

OBJS += \
./src/c++\ oops.o 


# Each subdirectory must supply rules for building sources it contributes
src/c++\ oops.o: ../src/c++\ oops.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/c++ oops.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/c++\ oops.d ./src/c++\ oops.o

.PHONY: clean-src

