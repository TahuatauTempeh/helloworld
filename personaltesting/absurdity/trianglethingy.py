import matplotlib.pyplot as plt
import numpy as np

def sierpinski(points, depth):
    if depth == 0:
        return
    
    p1, p2, p3 = points
    
    # Calculate midpoints of triangle sides
    mid1 = (p1 + p2) / 2
    mid2 = (p2 + p3) / 2
    mid3 = (p1 + p3) / 2
    
    # Plot the triangle
    plt.plot(*zip(*[p1, p2, p3, p1]), color='black')
    
    # Recursive calls for smaller triangles
    sierpinski([p1, mid1, mid3], depth - 1)
    sierpinski([mid1, p2, mid2], depth - 1)
    sierpinski([mid3, mid2, p3], depth - 1)

# Initial triangle vertices
initial_points = np.array([[0, 0], [1, 0], [0.5, np.sqrt(3) / 2]])

# Set recursion depth
depth = 5

# Create plot
fig, ax = plt.subplots()
ax.set_aspect('equal', adjustable='box')
ax.axis('off')

# Generate and plot the Sierpiński triangle
sierpinski(initial_points, depth)

# Show the plot
plt.show()