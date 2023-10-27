<h1> # Matsort.h </h1>
<h2>Description</h2>
Matsort.h is an open-source header that allows to sort arrays in C. By the moment
is still in progress (to see current functionalities read VersionNotes).
<h2>Example of usage</h2>

<code>
  //Declare your array
  int myArray[size] = {2, 1, 5, 4};
  
  //Call the function that you need
  SortIntMatrix(myArray, size);
  
  printf("Sorted array:\n");
  for(int i = 0; i < size; i++){
    printf("%d ", myArray[i]);
  }
  InvSortIntMatrix(myArray, size);
  printf("\n\nInverted sorted array:\n");
  for(int i = 0; i < size; i++){
    printf("%d ", myArray[i]);
  }

  /* OUTPUT */
  /*
  Sorted array:
  1 2 4 5

  Inverted sorted array:
  5 4 2 1
  */
</code>

<p><b><u><i>NOTE:</u></b> This is an example of one of the functions. If you need another functionalitie check de VersionNotes file.</i></p>

<h2>Contribution</h2>
If you find any bugs or have suggestions for improving the program or adding functionalities, please feel free to open an issue or submit a pull request.

<hr>

Feel free to modify this README according to your specific project and requirements. Keeping it clear, concise, and informative will help users understand and use your matrix sorting C header file effectively.
