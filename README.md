# CountOfDiscount
A program that will read the code and price of an unknown number of products
someone bought in a department store. The code should be in the space [0..2000] and become the
corresponding control by the program. Data entry (code and value) will continue until
zero is given as a code (see execution example).
Points calculation
For each product some points are given, which the customer redeems with various gifts. Specifically,
for each product is given:
• one point regardless of its value and
• in addition for products with a code from 1000 to 1500 one point for every 5 Euros of the final
value of the product. (ie the value resulting from the discount). The extra points
calculated by the formula
extra_points = ceil (final value / 5)
