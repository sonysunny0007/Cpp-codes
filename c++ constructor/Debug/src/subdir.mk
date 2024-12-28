################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/c++\ constructor.cpp 

CPP_DEPS += \
./src/c++\ constructor.d 

OBJS += \
./src/c++\ constructor.o 


# Each subdirectory must supply rules for building sources it contributes
src/c++\ constructor.o: ../src/c++\ constructor.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/c++ constructor.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/c++\ constructor.d ./src/c++\ constructor.o

.PHONY: clean-src

