################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/firmware-libraries/SerialComms/src/comms.c 

OBJS += \
./Core/firmware-libraries/SerialComms/src/comms.o 

C_DEPS += \
./Core/firmware-libraries/SerialComms/src/comms.d 


# Each subdirectory must supply rules for building sources it contributes
Core/firmware-libraries/SerialComms/src/comms.o: ../Core/firmware-libraries/SerialComms/src/comms.c Core/firmware-libraries/SerialComms/src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F446xx -c -I../Core/Inc -I../Core/firmware-libraries/MAX31855/inc -I../Core/firmware-libraries/MAX11131/inc -I../Core/firmware-libraries/W25N01GV/inc -I../Core/firmware-libraries/SerialComms/inc -I../Core/firmware-libraries/ValveLibs/inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/firmware-libraries/SerialComms/src/comms.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
