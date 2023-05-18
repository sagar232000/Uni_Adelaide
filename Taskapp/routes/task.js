const express = require('express');
const router = express.Router();
const TaskController = require('../controllers/taskController');

// Get all tasks
router.get('/', TaskController.getAllTasks);

// Get a single task by ID
router.get('/:id', TaskController.getTaskById);

// Create a new task
router.post('/', TaskController.createTask);

// Update a task by ID
router.put('/:id', TaskController.updateTask);

// Delete a task by ID
router.delete('/:id', TaskController.deleteTask);

module.exports = router;
