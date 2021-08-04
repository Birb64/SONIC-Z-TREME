#ifndef PHYSICS_H
#define PHYSICS_H

#ifndef PAL_VERSION
#define PHYS_AIR_ACCELERATION_STRENGTH (toFIXED(0.1422)) //Was 0.125
#define PHYS_AIR_DECELERATION_STRENGTH (toFIXED(0.29)) //was 0.2325
#define PHYS_DECELERATION_STRENGTH  (toFIXED(0.65)) //was 0.59375
#define PHYS_ACCELERATION_STRENGTH (toFIXED(0.1422)) //Supposed to be 0.046875
#define PHYS_NORMAL_FRICTION (toFIXED(0.0898))
#define PHYS_TURNING_FRICTION  (toFIXED(0.24)) //was 0.175 ~Birb 64: lower amount to compensate for smoother turning
#define PHYS_ROLLING_FRICTION  (toFIXED(0.048828))
#define PHYS_JUMP_SPEED_Y (toFIXED(6.85)) //was 6.7
#define PHYS_MAX_SPEED_Y (toFIXED(16.0)) //was 16
#define PHYS_BRAKING_SPEED (toFIXED(4.5))
#define PHYS_GRAVITY (toFIXED(0.225)) //was 0.21875
#define PHYS_MAX_SPEED (toFIXED(9.8))
#define PHYS_SLOPE_FACTOR (toFIXED(0.25))//(toFIXED(0.125)) ~Birb 64: at some point, move this to Physics.c and program rays that detect the ground in order to detect slope.
#define PHYS_FALLING_ANIM (toFIXED(5.0))
#define AUTO_SPIN (393216)
#define SPIN_INCREMENT  (toFIXED(3.0))
#define MAX_SPINCHARGE  (toFIXED(18.0))
#define SPRING_JUMP (-toFIXED(10.5))
#define ALT_SPRING (15<<16)

#define MAX_BOUNCE (toFIXED(-9.5))
#define MIN_BOUNCE (toFIXED(-6.0))
#define HIT_BOUNCE (toFIXED(3.5))
#define MUSHR_BOUNCE (toFIXED(6.8))

#else
#define PHYS_AIR_ACCELERATION_STRENGTH (toFIXED(0.176)) //Was 0.125
#define PHYS_AIR_DECELERATION_STRENGTH (toFIXED(0.275))  //Was 0.275
#define PHYS_DECELERATION_STRENGTH  (toFIXED(0.6875))
#define PHYS_ACCELERATION_STRENGTH (toFIXED(0.165)) //Supposed to be 0.046875
#define PHYS_NORMAL_FRICTION (toFIXED(0.10776))
#define PHYS_TURNING_FRICTION  (toFIXED(0.204)) //~Birb 64: lower amount to compensate for smoother turning ~~Birb 64: originally 0.204
#define PHYS_ROLLING_FRICTION  (toFIXED(0.05859375))
#define PHYS_JUMP_SPEED_Y (toFIXED(8.22)) //was 6.7
#define PHYS_MAX_SPEED_Y (toFIXED(19.2))
#define PHYS_BRAKING_SPEED (toFIXED(5.4))
#define PHYS_GRAVITY (toFIXED(0.33)) //was 0.21875
#define PHYS_MAX_SPEED (toFIXED(11.76))
#define PHYS_SLOPE_FACTOR (toFIXED(0.25))//(toFIXED(0.125)) ~Birb 64: at some point, move this to Physics.c and program rays that detect the ground in order to detect slope.
#define PHYS_FALLING_ANIM (toFIXED(5.0))
#define AUTO_SPIN (393216)
#define SPIN_INCREMENT  (toFIXED(3.6))
#define MAX_SPINCHARGE  (toFIXED(18.0))
#define SPRING_JUMP (-toFIXED(12.6))
#define ALT_SPRING (18<<16)

#define MAX_BOUNCE (toFIXED(-11.4))
#define MIN_BOUNCE (toFIXED(-7.2))
#define HIT_BOUNCE (toFIXED(4.2))
#define MUSHR_BOUNCE (toFIXED(8.16))

#endif

#endif // PHYSICS_H
