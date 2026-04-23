🤖 Dual Color Line Follower Robot 

An autonomous robot designed to follow a path using two IR sensors with dual-color detection capability. The system can distinguish between black and white surfaces and adjust its movement accordingly using simple rule-based logic. An Arduino Uno processes sensor inputs and controls motor movement through a motor driver.

⚙️ How It Works

The robot uses two IR sensors (left and right) to detect surface color:

⚪ White surface (0): No line detected

⚫ Black surface (1): Line detected

Movement Logic:

🟢 Both sensors on white (0,0):

Robot moves forward (on correct path)

↩️ Left sensor on black (1,0):

Robot turns right to correct alignment

↪️ Right sensor on black (0,1):

Robot turns left to correct alignment

🔄 Both sensors on black (1,1):

Robot moves backward briefly and then stops (end or junction condition)

This logic enables the robot to follow lines and handle intersections or edge cases.

🔹 Features

Dual IR sensor-based line detection

Supports black and white surface differentiation

Automatic path correction (left/right turning)

Backward recovery mechanism for edge conditions

Simple and efficient control logic

🧩 Components Used

Arduino Uno

IR Sensors (2 units)

Motor Driver (L293D)

DC Motors

Chassis & Wheels

Power Supply

🚀 Applications

Line-following robots

Path-guided automation systems

Robotics competitions

Industrial material transport prototypes

🔮 Future Improvements

Add PID control for smoother movement

Increase number of sensors for better accuracy

Add speed control using PWM

Integrate obstacle detection
