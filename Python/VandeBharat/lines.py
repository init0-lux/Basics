import networkx as nx
import matplotlib.pyplot as plt
from mpl_toolkits.basemap import Basemap

# Function to parse the routes from the file
def parse_routes(file_path):
    routes = []
    with open(file_path, 'r') as file:
        for line in file:
            if "Train Route" in line:
                # Extract cities using a simple split
                parts = line.split(":")[1].strip().split("-")
                if len(parts) == 2:
                    from_city = parts[0].strip()
                    to_city = parts[1].strip().split(" ")[0]  # Remove "Vande Bharat Express"
                    routes.append((from_city, to_city))
    return routes

# Function to visualize routes on a map
def visualize_routes_on_map(routes):
    # Initialize the map
    m = Basemap(
        projection='merc',
        llcrnrlat=6.0,
        urcrnrlat=38.0,
        llcrnrlon=68.0,
        urcrnrlon=98.0,
        resolution='i'
    )
    m.drawcoastlines()
    m.drawcountries()
    m.drawstates()

    # Hardcoded coordinates for major cities (approximate latitudes and longitudes)
    city_coords = {
        "New Delhi": (28.6139, 77.2090),
        "Varanasi": (25.3176, 82.9739),
        "Mumbai": (19.0760, 72.8777),
        "Chennai": (13.0827, 80.2707),
        "Kolkata": (22.5726, 88.3639),
        "Bengaluru": (12.9716, 77.5946),
        "Hyderabad": (17.3850, 78.4867),
        "Pune": (18.5204, 73.8567),
        "Jaipur": (26.9124, 75.7873),
        "Ahmedabad": (23.0225, 72.5714),
        "Nagpur": (21.1458, 79.0882),
        "Lucknow": (26.8467, 80.9462),
        "Dehradun": (30.3165, 78.0322),
        "Amritsar": (31.6340, 74.8723),
        "Patna": (25.5941, 85.1376),
        "Ranchi": (23.3441, 85.3096),
        "Guwahati": (26.1445, 91.7362),
        "Thiruvananthapuram": (8.5241, 76.9366),
        "Madgaon": (15.2832, 73.9862),
        "Coimbatore": (11.0168, 76.9558),
        "Visakhapatnam": (17.6868, 83.2185),
        "Mysuru": (12.2958, 76.6394),
        "Jodhpur": (26.2389, 73.0243)
    }

    # Plot the cities on the map
    for city, coords in city_coords.items():
        x, y = m(coords[1], coords[0])
        m.plot(x, y, 'ro', markersize=5)  # Plot cities as red dots
        plt.text(x, y, city, fontsize=8)

    # Plot the routes as lines between cities
    for route in routes:
        from_city, to_city = route
        if from_city in city_coords and to_city in city_coords:
            x1, y1 = m(city_coords[from_city][1], city_coords[from_city][0])
            x2, y2 = m(city_coords[to_city][1], city_coords[to_city][0])
            m.plot([x1, x2], [y1, y2], 'b-', linewidth=1.5)  # Blue lines with increased thickness

    # Show the map with title
    plt.title("Vande Bharat Train Routes")
    plt.show()

# Main Program
if __name__ == "__main__":
    file_path = "routes.txt"  # Replace with the actual file name
    routes = parse_routes(file_path)
    visualize_routes_on_map(routes)

