int led[] = {14, 15, 16}; 	// 14 = red, 15 = green, 16 = blue

const boolean ON = LOW; 	// Define on as LOW (common Anode RGB LED)
const boolean OFF = HIGH; 	// Define off as HIGH

// Predefined Colors
const boolean RED[] 	= {ON, OFF, OFF};
const boolean GREEN[] 	= {OFF, ON, OFF};
const boolean BLUE[] 	= {OFF, OFF, ON};
const boolean YELLOW[] 	= {ON, ON, OFF};
const boolean CYAN[] 	= {OFF, ON, ON};
const boolean MAGENTA[]	= {ON, OFF, ON};
const boolean WHITE[] 	= {ON, ON, ON};
const boolean BLACK[] 	= {OFF, OFF, OFF};

const boolean* COLORS[] = {RED, GREEN, BLUE, YELLOW, CYAN, MAGENTA, WHITE, 
	BLACK};

void setup() {
	for(int i = 0; i < 3; i++){
       pinMode(led[i], OUTPUT); //Set the three LED pins as outputs
    }
}

void loop() {
	int i = random(0,8);
	setColor(led, COLORS[i]);

	delay(500);
}

// Grab the on/off values from the large colors array
void setColor(int* led, const boolean* color){ 
    boolean tempColor[] = {color[0], color[1], color[2]};
    //setColor(led, tempColor);   
    // Experimental!
    for(int i = 0; i < 3; i++){    
        digitalWrite(led[i], tempColor[i]);     
    }   
}

/*
void setColor(int* led, boolean* color){ 
    for(int i = 0; i < 3; i++){    
        digitalWrite(led[i], color[i]);     
    }    
}
*/