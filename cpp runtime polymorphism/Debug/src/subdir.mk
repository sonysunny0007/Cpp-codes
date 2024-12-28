################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/cpp\ runtime\ polymorphism.cpp 

CPP_DEPS += \
./src/cpp\ runtime\ polymorphism.d 

OBJS += \
./src/cpp\ runtime\ polymorphism.o 


# Each subdirectory must supply rules for building sources it contributes
src/cpp\ runtime\ polymorphism.o: ../src/cpp\ runtime\ polymorphism.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/cpp runtime polymorphism.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/cpp\ runtime\ polymorphism.d ./src/cpp\ runtime\ polymorphism.o

.PHONY: clean-src

