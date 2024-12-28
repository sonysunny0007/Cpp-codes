################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/header\ inclusion.cpp 

CPP_DEPS += \
./src/header\ inclusion.d 

OBJS += \
./src/header\ inclusion.o 


# Each subdirectory must supply rules for building sources it contributes
src/header\ inclusion.o: ../src/header\ inclusion.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/header inclusion.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/header\ inclusion.d ./src/header\ inclusion.o

.PHONY: clean-src

