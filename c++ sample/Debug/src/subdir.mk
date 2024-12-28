################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/c++\ sample.cpp 

CPP_DEPS += \
./src/c++\ sample.d 

OBJS += \
./src/c++\ sample.o 


# Each subdirectory must supply rules for building sources it contributes
src/c++\ sample.o: ../src/c++\ sample.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/c++ sample.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/c++\ sample.d ./src/c++\ sample.o

.PHONY: clean-src

