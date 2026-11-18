n = 10
a = 1
b = 0
for i = 1, n + 1 do
	c = a + b
	a = b
	b = c
	-- print(i .. ":" .. c)
	print(2 * c - 1)
end
