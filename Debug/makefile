################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include MCAL/PWM/static/subdir.mk
-include MCAL/ICU/static/subdir.mk
-include MCAL/ICU/config/subdir.mk
-include MCAL/DIO/subdir.mk
-include HAL/GLCD/static/subdir.mk
-include APP/pwm_drawer/subdir.mk
-include APP/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
pwm_drawer.lss \

FLASH_IMAGE += \
pwm_drawer.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: pwm_drawer.elf secondary-outputs

# Tool invocations
pwm_drawer.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,pwm_drawer.map -mmcu=atmega32 -o "pwm_drawer.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

pwm_drawer.lss: pwm_drawer.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S pwm_drawer.elf  >"pwm_drawer.lss"
	@echo 'Finished building: $@'
	@echo ' '

pwm_drawer.hex: pwm_drawer.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex pwm_drawer.elf  "pwm_drawer.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: pwm_drawer.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 pwm_drawer.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) pwm_drawer.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
