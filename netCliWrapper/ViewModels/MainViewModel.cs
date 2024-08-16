using clrWrapper;
using System.ComponentModel;

namespace netCliWrapper.ViewModels
{
  public class MainViewModel : INotifyPropertyChanged
  {
    private string? message;

    public string? Message
    {
      get => message;
      set
      {
        message = value;
        OnPropertyChanged(nameof(Message));
      }
    }

    public MainViewModel()
    {
      var businessLogic = new BusinessLogicWrapper();
      Message = businessLogic.GetMessage();
    }

    public event PropertyChangedEventHandler? PropertyChanged;

    protected virtual void OnPropertyChanged(string propertyName)
    {
      PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(propertyName));
    }
  }
}
