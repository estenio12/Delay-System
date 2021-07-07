# Delay-System
this system was made inspired by the Unreal Engine 4 delay system.
I made this system to use as a AI brain or screen message timer.

# How to use

<ul>
   <li><b>step 1: </b> add this project folder on your project.</li>
   <li><b>step 2: </b> include header file.</li>
   <li><b>step 3: </b>for this work, the delay function should called on branch ( if ) <br></br></li>
    
     the delay function returns a boolean value. 
     and this value will be true when certain time 
     has been reached. if the returned value is false,
     it is because the delay has not reached the specified time.
     
     # inside your loop code, put this block
     
        // # Here an exemplo how to call delay
        // # Each 5 seconds, a message will show on display

        // # Warning: This function does not manage FPS, Thread Sleep or others.
        // # it just counts the time passed by deltaTime.
        // # The management of the FPS is your responsibility.

        if( Timer::Delay(5.f) ){

          // # Inside this block, you must put your logic
          // # that will run at a specific time
          std::cout << "Hello there!" << std::endl;
        }

  </ul>
  
  # Warning
    This system was made of targeted games. Does not manage FPS,
    Thread Sleep or others. The management of the FPS is your
    responsibility. Because each game is made in a different way.
