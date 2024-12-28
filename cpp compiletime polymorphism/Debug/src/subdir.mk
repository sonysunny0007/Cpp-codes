################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/cpp\ compiletime\ polymorphism.cpp 

CPP_DEPS += \
./src/cpp\ compiletime\ polymorphism.d 

OBJS += \
./src/cpp\ compiletime\ polymorphism.o 


# Each subdirectory must supply rules for building sources it contributes
src/cpp\ compiletime\ polymorphism.o: ../src/cpp\ compiletime\ polymorphism.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/cpp compiletime polymorphism.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/cpp\ compiletime\ polymorphism.d ./src/cpp\ compiletime\ polymorphism.o

.PHONY: clean-src

