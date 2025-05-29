#!/bin/bash

# Function to validate attendance input
validate_attendance() {
  if [[ "$1" =~ ^[0-9]+$ ]] && [ "$1" -ge 0 ] && [ "$1" -le 100 ]; then
    return 0
  else
    echo "Invalid input. Please enter a number between 0 and 100."
    return 1
  fi
}

# Function to categorize attendance
categorize_attendance() {
  case $1 in
    9[0-9]|100)
      echo "Excellent"
      ;;
    7[0-9]|8[0-9])
      echo "Good"
      ;;
    5[0-9]|6[0-9])
      echo "Average"
      ;;
    *)
      echo "Poor"
      ;;
  esac
}

# Main loop to process multiple students
read -p "Enter number of students: " total

for (( i=1; i<=total; i++ ))
do
  echo ""
  echo "Student #$i"
  
  while true; do
    read -p "Enter attendance percentage (0-100): " attendance
    validate_attendance "$attendance" && break
  done
  
  echo -n "Status: "
  categorize_attendance "$attendance"
done
