char *buffer;

unsigned int position;



if (size == 0)

{

return (NULL);

}



/*Define values with malloc*/

buffer = (char *) malloc(size * sizeof(c));



if (buffer == 0)

{

return (NULL);

}



else

{

position = 0;

while (position < size) /*While for array*/

{

*(buffer + position) = c;

position++;

}



return (buffer);

}



}

