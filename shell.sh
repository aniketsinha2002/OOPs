echo "--------- Program Starts ----------"

echo "Enter your name: "
read name

echo "Enter your age: "
read age

echo "Enter first number: "
read num1

echo "Enter second number: "
read num2

# Calculate sum
sum=$((num1 + num2))

# Printing results
echo "Hello, $name!"
echo "Sum: $sum"

# Checking if sum is greater than or equal to 100
if [ $sum -ge 100 ]; then
  echo "The sum is quite large!"
else
  echo "The sum is relatively small."
fi

# Check even odd - with LOOP
echo "Enter numbers separated by spaces (e.g., 1 2 3 4 5):"
read -a numbers

for num in "${numbers[@]}"; do
  # Check if the current input is a valid number
  if ! [[ "$num" =~ ^[0-9]+$ ]]; then
    echo "Error: '$num' is not a valid number. Please enter only digits."
    continue # Skip to the next iteration of the loop
  fi

  # Perform the even/odd check and output the result
  if (( num % 2 == 0 )); then
    echo "$num is EVEN"
  else
    echo "$num is ODD"
  fi
done # 

# Check if user is adult or minor
if [ $age -ge 18 ]; then
  echo "You are an adult."
else
  echo "You are a minor."
fi

echo "--------- Program Ends ----------" 