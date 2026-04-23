🤖 Motion Following Robot 

An autonomous robot that detects human motion using a PIR (Passive Infrared) sensor and follows the detected movement. The system uses an Arduino Uno to process motion signals and control the robot’s movement through a motor driver, enabling simple human-following behavior.

⚙️ How It Works

The PIR sensor continuously monitors for motion in its detection range.

🚶 Motion Detected (HIGH):

The robot moves forward to follow the detected movement.

🛑 No Motion Detected (LOW):

The robot stops completely.

The system also prints motion status to the Serial Monitor for real-time feedback and debugging.

🔹 Features

Real-time motion detection using PIR sensor

Automatic forward movement on detection

Stops when no motion is present

Simple and efficient human-following logic

Serial monitoring for debugging

🧩 Components Used

Arduino Uno

PIR Motion Sensor

Motor Driver (L293D)

DC Motors

Chassis & Wheels

Power Supply

🚀 Applications

Human-following robots

Security and surveillance systems

Smart automation systems

Educational robotics projects

🔮 Future Improvements

Add directional tracking using multiple sensors

Integrate ultrasonic sensor for obstacle avoidance

Add speed control using PWM

Combine with camera-based tracking
