#This is a program written in ruby to perform a linear search

def linear_search(array, key)
  if array.index(key).nil?
    print "Number not found!"
  else
    print "#{key} at index #{array.index(key)}"
  end
end

print "Enter number of numbers"
num = $stdin.gets.chomp.to_i
print "Enter the numbers!"

arr = Array.new(50)
for i in 1..num
  arr[i] = $stdin.gets.chomp.to_i
end
print "Enter the number to be found:"
key = $stdin.gets.chomp.to_i
linear_search(arr, key)
