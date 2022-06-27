const tasks = [
  { name: "Buy a new gaming laptop", completed: true },
  { name: "Complete a previous task", completed: false },
  { name: "Create video for YouTube", completed: true },
  { name: "Create a new portafolio site", completed: false },
  { name: "Learn to program with rust", completed: false },
];

const containerTask = document.getElementById("container-task");

tasks.forEach((task) => {
  if (task.completed == true) {
    containerTask.innerHTML += `<li> ${task.name} <span class="material-symbols-outlined">check_circle</span></li>`;
  } else {
    containerTask.innerHTML += `<li> ${task.name} <span class="material-symbols-outlined">cancel</span></li>`;
  }
});
