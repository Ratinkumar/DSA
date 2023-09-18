import matplotlib.pyplot as plt

# Line Chart
def display_line_chart():
    x = [1, 2, 3, 4, 5]
    y = [1, 4, 9, 16, 25]

    plt.plot(x, y)
    plt.xlabel('X-axis')
    plt.ylabel('Y-axis')
    plt.title('Line Chart')
    plt.show()

# Scatter Plot
def display_scatter_plot():
    x = [1, 2, 3, 4, 5]
    y = [1, 4, 9, 16, 25]

    plt.scatter(x, y)
    plt.xlabel('X-axis')
    plt.ylabel('Y-axis')
    plt.title('Scatter Plot')
    plt.show()

# Bar Graph
def display_bar_graph():
    x = ['A', 'B', 'C', 'D', 'E']
    y = [10, 24, 15, 7, 12]

    plt.bar(x, y)
    plt.xlabel('Categories')
    plt.ylabel('Values')
    plt.title('Bar Graph')
    plt.show()

# Display the charts
display_line_chart()
display_scatter_plot()
display_bar_graph()
