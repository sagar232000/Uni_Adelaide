const express = require('express');
const app = express();

// ...

// Import and register the task routes
const taskRoutes = require('./routes/tasks');
app.use('/tasks', taskRoutes);

// ...

// Start the server
app.listen(3000, () => {
  console.log('Server is running on port 3000');
});
