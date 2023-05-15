# IoT--Smart-grid

IoT smart grid is a project that aims at making the grid smart and eliminating power outages.

In this project, we have incoporated sensors into the current grid in order to promote communication.

This is basically how it works, in case of power loss at a specific point in the grid, the sensors are able to communicate and 
power is rerouted almost immediately, additionally, the information is sent to the power management personnels who are then able to keenly
internalize the problem and if its a vital one, they are able to attend to it almost immediately.

This is how you can run the project----

Connect your IoT components as shown in the image.png, copy and paste the .uno code to your Arduino IDE, 

Connect your arduino board to your machine and choose a board, you will get a message if a successful connection takes place. 

The LCD display will disaplay a message depending on the status of the grid. If there is power flowing, it will diaplay "There is power on
the main grid" however if there is a loss in power it will instead display "power out, switching to alternative power source".
