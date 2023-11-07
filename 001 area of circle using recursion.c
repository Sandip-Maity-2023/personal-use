
// Recursive function to calculate the area of a circle
float areaOfCircle(float radius) {
  if (radius == 0) {
    return 0;
  } else {
    // Calculate the area of the circle
    float area = 3.14159265358979323846 * radius * radius;

    // Return the area
    return area;
  }
}

int main() {
  // Get the radius from the user
  float radius;
  printf("Enter the radius of the circle: ");
  scanf("%f", &radius);

  // Calculate the area of the circle
  float area = areaOfCircle(radius);

  // Print the area of the circle
  printf("The area of the circle is: %f\n", area);

  return 0;
}
