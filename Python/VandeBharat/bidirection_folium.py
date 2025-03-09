import folium

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

# Coordinates for major cities
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

# Function to visualize routes using folium
def visualize_routes_folium(routes):
    # Create a map centered on India
    m = folium.Map(location=[20.5937, 78.9629], zoom_start=5)

    # Add markers for all the cities
    for city, coords in city_coords.items():
        folium.Marker(
            location=coords,
            popup=city,
            icon=folium.Icon(color="red", icon="info-sign")
        ).add_to(m)

    # Add lines to represent train routes
    for route in routes:
        from_city, to_city = route
        if from_city in city_coords and to_city in city_coords:
            from_coords = city_coords[from_city]
            to_coords = city_coords[to_city]
            
            # Add lines for both directions: from->to and to->from
            folium.PolyLine(
                [from_coords, to_coords],
                color="blue",
                weight=2,
                opacity=0.7,
                popup=f"{from_city} -> {to_city}"
            ).add_to(m)
            folium.PolyLine(
                [to_coords, from_coords],
                color="green",
                weight=2,
                opacity=0.7,
                popup=f"{to_city} -> {from_city}"
            ).add_to(m)

    # Save the map to an HTML file and display
    m.save("vande_bharat_routes.html")
    print("Map saved as 'vande_bharat_routes.html'. Open it in your browser to view.")

# Main Program
if __name__ == "__main__":
    file_path = "routes.txt"  # Replace with the actual file name
    routes = parse_routes(file_path)
    visualize_routes_folium(routes)

