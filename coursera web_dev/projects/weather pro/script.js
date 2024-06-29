async function fetchData(city) {
    const url = `https://weather-by-api-ninjas.p.rapidapi.com/v1/weather?city=${city}`;
    const options = {
        method: 'GET',
        headers: {
            'X-RapidAPI-Key': 'a8d1a60eefmsh8fd302ab1b06891p1c484bjsn09cec4b0a9a1',
            'X-RapidAPI-Host': 'weather-by-api-ninjas.p.rapidapi.com'
        }
    };

    try {
        const response = await fetch(url, options);

        if (!response.ok) {
            throw new Error('Network response was not ok');
        }

        const data = await response.json(); // Parse the response as JSON

        // Update the DOM elements with weather data
        updateElement('cloud_pct', data.cloud_pct);
        updateElement('temp', data.temp);
        updateElement('temp2', data.temp);
        updateElement('feels_like', data.feels_like);
        updateElement('humidity', data.humidity);
        updateElement('humidity2', data.humidity);
        updateElement('min_temp', data.min_temp);
        updateElement('max_temp', data.max_temp);
        updateElement('wind_speed', data.wind_speed);
        updateElement('wind_speed2', data.wind_speed);
        updateElement('wind_degrees', data.wind_degrees);

        // Convert and update sunrise and sunset times
        updateElement('sunrise', formatDate(data.sunrise));
        updateElement('sunset', formatDate(data.sunset));

        // Update the city name in the <h1> element
        updateCityName(city);

        // Add or update a row for this city's weather data
        dynamicrows(data, city);
    } catch (error) {
        console.error('Error:', error.message);
    }
}

function updateElement(id, value) {
    const element = document.getElementById(id);
    if (element) {
        element.innerHTML = value;
    } else {
        console.error(`Element with ID '${id}' not found`);
    }
}

function formatDate(timestamp) {
    const date = new Date(timestamp * 1000); // Convert timestamp to milliseconds
    const hours = date.getHours();
    const minutes = date.getMinutes().toString().padStart(2, '0');
    const ampm = hours >= 12 ? 'PM' : 'AM';
    const formattedHours = (hours % 12 || 12).toString().padStart(2, '0'); // Convert 0 to 12
    return `${formattedHours}:${minutes} ${ampm}`;
}

function dynamicrows(response, city) {
    const tableBody = document.querySelector('tbody');
    const existingRow = tableBody.querySelector(`[data-city="${city}"]`);

    if (existingRow) {
        // Update the existing row if the city already exists
        existingRow.innerHTML = `
                            <td><b>${city}</b></td>
                            <td>${response.cloud_pct}</td>
                            <td>${response.temp}</td>
                            <td>${response.feels_like}</td>
                            <td>${response.humidity}</td>
                            <td>${response.min_temp}</td>
                            <td>${response.max_temp}</td>
                            <td>${response.wind_speed}</td>
                            <td>${response.wind_degrees}</td>
                            <td>${formatDate(response.sunrise)}</td>
                            <td>${formatDate(response.sunset)}</td>
                        `;
    } else {
        // Create a new row if the city doesn't exist
        const newRow = document.createElement('tr');
        newRow.setAttribute('data-city', city); // Add a data attribute for identification
        newRow.innerHTML = `
                            <td><b>${city}</b></td>
                            <td>${response.cloud_pct}</td>
                            <td>${response.temp}</td>
                            <td>${response.feels_like}</td>
                            <td>${response.humidity}</td>
                            <td>${response.min_temp}</td>
                            <td>${response.max_temp}</td>
                            <td>${response.wind_speed}</td>
                            <td>${response.wind_degrees}</td>
                            <td>${formatDate(response.sunrise)}</td>
                            <td>${formatDate(response.sunset)}</td>
                        `;
        tableBody.appendChild(newRow);
    }
}

function updateCityName(city) {
    const citySpan = document.getElementById('data-city');
    if (citySpan) {
        citySpan.textContent = city; // Update the city name
    }
}

const cityInput = document.getElementById('city');
const submitButton = document.getElementById('submit');

submitButton.addEventListener("click", (e) => {
    e.preventDefault();
    const cityName = cityInput.value;
    fetchData(cityName);
});

// Initial weather data for a default city (Delhi)
fetchData("Delhi");
